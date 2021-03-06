/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSMutableDictionary, CBPairingAlert, NSNumber, CBConcreteCentralManager;

@interface CBConcretePeripheral : CBPeripheral <CBPairingAlertDelegate> {
    CBConcreteCentralManager *_centralManager;
    NSNumber *_handle;
    NSMutableDictionary *_attributes;
    CBPairingAlert *_pairingAlert;
}

@property(readonly) NSNumber * handle;


- (void)pair;
- (id)handle;
- (BOOL)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (void)readRSSI;
- (void)discoverServices:(id)arg1;
- (void)discoverIncludedServices:(id)arg1 forService:(id)arg2;
- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2;
- (void)readValueForCharacteristic:(id)arg1;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(int)arg3;
- (void)reliablyWriteValues:(id)arg1 forCharacteristics:(id)arg2;
- (void)setBroadcastValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)setIndicateValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)discoverDescriptorsForCharacteristic:(id)arg1;
- (void)readValueForDescriptor:(id)arg1;
- (void)writeValue:(id)arg1 forDescriptor:(id)arg2;
- (void)pairingAlert:(id)arg1 acceptedPairing:(BOOL)arg2 ofType:(id)arg3 withPasskey:(id)arg4;
- (void)acceptPairing:(BOOL)arg1 ofType:(id)arg2 withPasskey:(id)arg3;
- (void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4;
- (void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3;
- (void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3;
- (void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3;
- (id)attributeForHandle:(id)arg1;
- (void)setAttribute:(id)arg1 forHandle:(id)arg2;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (void)setOrphan;
- (id)initWithCentralManager:(id)arg1 UUID:(struct __CFUUID { }*)arg2 handle:(id)arg3;
- (void)handleDisconnection;
- (void)handleRSSIUpdated:(id)arg1;
- (void)handleWritesExecuted:(id)arg1;
- (void)handleServicesDiscovered:(id)arg1;
- (void)handlePairingRequested:(id)arg1;
- (void)handlePairingCompleted:(id)arg1;
- (void)handleServiceIncludedServicesDiscovered:(id)arg1;
- (void)handleServiceCharacteristicsDiscovered:(id)arg1;
- (void)handleCharacteristicValueUpdated:(id)arg1;
- (void)handleCharacteristicValueWritten:(id)arg1;
- (void)handleCharacteristicValueBroadcasted:(id)arg1;
- (void)handleCharacteristicValueNotifying:(id)arg1;
- (void)handleCharacteristicDescriptorsDiscovered:(id)arg1;
- (void)handleDescriptorValueUpdated:(id)arg1;
- (void)handleDescriptorValueWritten:(id)arg1;

@end
