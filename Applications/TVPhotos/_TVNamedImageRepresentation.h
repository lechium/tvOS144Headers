//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPImageRepresentation.h"

@class NSBundle, NSString, UITraitCollection;

@interface _TVNamedImageRepresentation : TVPImageRepresentation
{
    NSBundle *_bundle;	// 80 = 0x50
    NSString *_imageName;	// 88 = 0x58
    UITraitCollection *_traitCollection;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000106fc
- (id)_originalImageCacheKey;	// IMP=0x000000010001064c
- (struct CGImage *)_originalImage;	// IMP=0x00000001000105c8
- (id)initWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x00000001000104d8

@end

