import Foundation

public class Alarm {
    enum Thesholds {
        static let lowPressure = 17.0
        static let highPressure = 21.0
    }

    let sensor = Sensor()
    
    var alarmOn = false
    
    public func check() -> Void {
        let psiPressureValue = sensor.popNextPressurePsiValue()
        
        if psiPressureValue < Thesholds.lowPressure ||
            Thesholds.highPressure < psiPressureValue {
            alarmOn = true
        }
    }
    
    public var isAlarmOn: Bool {
        return self.alarmOn
    }
}
