import Foundation

public class Sensor {
    public let OFFSET = 16.0

    public func popNextPressurePsiValue() -> Double {
        let pressureTelemetryValue = samplePressure()
        
        return OFFSET + pressureTelemetryValue
    }
    
    public func samplePressure() -> Double {
        let pressureRange = 0.00...42.0
        return 6 * Double.random(in: pressureRange) * Double.random(in: pressureRange)
    }
}
