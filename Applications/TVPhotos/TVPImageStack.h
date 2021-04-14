//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableSet, TVArchivedLayeredImageProxy;
@protocol OS_dispatch_queue;

@interface TVPImageStack : NSObject <NSCopying>
{
    int _blendMode;	// 8 = 0x8
    double _flatImageCornerRadius;	// 16 = 0x10
    NSArray *_imageRepresentations;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_layeredImageLoadingQueue;	// 32 = 0x20
    TVArchivedLayeredImageProxy *_layeredImageProxy;	// 40 = 0x28
    NSArray *_imageProxies;	// 48 = 0x30
    NSMutableSet *_loadingOperations;	// 56 = 0x38
    struct CGSize _naturalSize;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    _Bool _topLayerIsFixedFrame;	// 88 = 0x58
    _Bool _legacy;	// 89 = 0x59
    id _placeholderImage;	// 96 = 0x60
    id _flatImage;	// 104 = 0x68
}

+ (struct CGSize)_naturalSizeForImageStackSpecification:(id)arg1;	// IMP=0x0000000100043510
+ (id)_loadingOperationQueue;	// IMP=0x0000000100043434
+ (id)_imageRepresentationsForImageStackSpecification:(id)arg1 fromURL:(id)arg2;	// IMP=0x0000000100042938
+ (id)_imageRepresentationsForUIImage:(id)arg1 outFlatImage:(out id *)arg2 outFlatImageCornerRadius:(out double *)arg3;	// IMP=0x0000000100042630
- (void).cxx_destruct;	// IMP=0x0000000100044940
@property(nonatomic) _Bool legacy; // @synthesize legacy=_legacy;
@property(retain, nonatomic) id flatImage; // @synthesize flatImage=_flatImage;
@property(retain, nonatomic) id placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void)_loadImagesAtSize:(struct CGSize)arg1 scaledSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100043954
- (void)_loadLayeredImageProxy;	// IMP=0x0000000100043694
- (void)loadImagesAtSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004261c
- (void)setTopLayerIsFixedFrame:(_Bool)arg1;	// IMP=0x0000000100042614
- (_Bool)topLayerIsFixedFrame;	// IMP=0x000000010004260c
- (void)setBlendMode:(int)arg1;	// IMP=0x0000000100042604
- (int)blendMode;	// IMP=0x00000001000425fc
- (void)setFlatImageCornerRadius:(double)arg1;	// IMP=0x00000001000425f4
- (struct CGSize)naturalSize;	// IMP=0x00000001000425ec
- (double)flatImageCornerRadius;	// IMP=0x00000001000425e4
- (id)imageProxies;	// IMP=0x00000001000425dc
- (id)layeredImageProxy;	// IMP=0x00000001000425d4
- (void)cancel;	// IMP=0x0000000100042534
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000424a8
- (id)initWithArchivedLayeredImageProxy:(id)arg1;	// IMP=0x0000000100042420
- (id)initWithURL:(id)arg1;	// IMP=0x000000010004224c
- (id)initWithImageProxies:(id)arg1;	// IMP=0x0000000100042060
- (id)initWithImages:(id)arg1;	// IMP=0x0000000100041d48
- (id)initWithImageURLs:(id)arg1;	// IMP=0x0000000100041afc
- (id)init;	// IMP=0x0000000100041a54

@end

