/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray;

@interface MKCache : NSObject  {
    id _imp;
}

@property(readonly) NSArray * allObjects;
@property(readonly) unsigned int count;
@property float compactionFactor;
@property(readonly) unsigned int maxCapacity;

+ (id)impWithCapacity:(unsigned int)arg1 maxCapacity:(unsigned int)arg2 delegate:(id)arg3;

- (unsigned int)getKeys:(const void**)arg1 values:(const void**)arg2;
- (unsigned int)maxCapacity;
- (void)setMaxCapacity:(unsigned int)arg1;
- (void)compact;
- (id)allObjects;
- (void)removeAllObjects;
- (void)setCompactionFactor:(float)arg1;
- (float)compactionFactor;
- (id)initWithCapacity:(unsigned int)arg1 maxCapacity:(unsigned int)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (unsigned int)count;
- (id)description;
- (id)objectForKey:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end
