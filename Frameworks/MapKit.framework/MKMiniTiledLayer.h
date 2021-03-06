/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLock;

@interface MKMiniTiledLayer : CALayer  {
    float _zoomScale;
    float _roundedZoomScale;
    int _zoomLevel;
    struct CADoubleSize { 
        double width; 
        double height; 
    } _tileSize;
    BOOL _drawingEnabled;
    void *_hash;
    unsigned int _maxTiles;
    unsigned int _lastPrefetchTiles;
    unsigned int _prefetchTiles;
    float _lastTileZoomScale;
    struct CADoubleRect { 
        struct CADoublePoint { 
            double x; 
            double y; 
        } origin; 
        struct CADoubleSize { 
            double width; 
            double height; 
        } size; 
    } _lastTileRect;
    NSLock *_tileLock;
}

@property struct CGSize { float x1; float x2; } tileSize;
@property unsigned int prefetchTiles;
@property(getter=isDrawingEnabled) BOOL drawingEnabled;
@property float maximumTileScale;


- (void)flush;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id).cxx_construct;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)setDrawingEnabled:(BOOL)arg1;
- (id)actionForKey:(id)arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)setZoomScale:(float)arg1;
- (float)zoomScale;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPrefetchTiles:(unsigned int)arg1;
- (unsigned int)prefetchTiles;
- (void)tileRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateTilesInRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)relayoutNecessaryForZoomScale:(float)arg1;
- (void)tileRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceNeedsDisplay:(BOOL)arg2 forceDisplay:(BOOL)arg3 ignoreDrawingEnabled:(BOOL)arg4;
- (id)init;
- (void)dealloc;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)displayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setMaximumTileScale:(float)arg1;
- (BOOL)canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (BOOL)isDrawingEnabled;
- (float)maximumTileScale;

@end
