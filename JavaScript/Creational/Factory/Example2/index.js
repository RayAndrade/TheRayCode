const RoadLogistics = require('./ConcreteCreatorRoad');
const SeaLogistics = require('./ConcreteCreatorSea');

const roadLogistics = new RoadLogistics();
roadLogistics.planDelivery();

const seaLogistics = new SeaLogistics();
seaLogistics.planDelivery();