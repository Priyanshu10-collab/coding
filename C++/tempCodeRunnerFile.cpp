string FrequencySort(string s) {
    unordered_map<char, int> mp;

    for (auto ch : s) {
        mp[ch]++;
    }

    priority_queue<pair<int, char>> maxHeap;
    for (auto &[ch, freq] : mp) {
        maxHeap.push({freq, ch});
    }

    string result;
    while (!maxHeap.empty()) {
        auto [freq, ch] = maxHeap.top();
        maxHeap.pop();
        result += string(freq, ch);
    }

    return result;
}