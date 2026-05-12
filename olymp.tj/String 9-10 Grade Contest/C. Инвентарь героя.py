class pair:
    def init(self, first, second):
        self.first = first
        self.second = second

def main():
    csv = input().split(',')
    d = {}
    for item in csv:
        d[item] = d.get(item, 0) + 1
    d = dict(sorted(d.items(), key=lambda x: x[1], reverse=True))
    for key, value in d.items():
        print(f"{key}({value})", end=',' if key != list(d.keys())[-1] else '')

if __name__ == "__main__":
    main()