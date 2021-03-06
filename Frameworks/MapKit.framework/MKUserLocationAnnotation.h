/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface MKUserLocationAnnotation : NSObject <MKUserLocationAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    double _accuracy;
}

@property double accuracy;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) NSString * title;
@property(readonly) NSString * subtitle;


- (double)accuracy;
- (void)setAccuracy:(double)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@end
