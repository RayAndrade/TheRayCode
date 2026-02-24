class Builder {
    buildPartA() {
        throw new Error("buildPartA() must be implemented.");
    }
    buildPartB() {
        throw new Error("buildPartB() must be implemented.");
    }
    getResult() {
        throw new Error("getResult() must be implemented.");
    }
}
module.exports = Builder;