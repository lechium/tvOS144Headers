//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VCPTask.h"

@class NSDictionary, PHAsset, VCPPhotosAssetChangeManager;

@interface VCPAssetAnalysisTask : VCPTask
{
    NSDictionary *_existingAnalysis;	// 8 = 0x8
    _Bool _allowStreaming;	// 16 = 0x10
    unsigned long long _types;	// 24 = 0x18
    PHAsset *_asset;	// 32 = 0x20
    VCPPhotosAssetChangeManager *_photosChangeManager;	// 40 = 0x28
}

+ (id)taskWithAnalysisTypes:(unsigned long long)arg1 forAsset:(id)arg2 withExistingAnalysis:(id)arg3;	// IMP=0x000000010002d008
- (void).cxx_destruct;	// IMP=0x000000010002e16c
@property(retain, nonatomic) VCPPhotosAssetChangeManager *photosChangeManager; // @synthesize photosChangeManager=_photosChangeManager;
@property(nonatomic) _Bool allowStreaming; // @synthesize allowStreaming=_allowStreaming;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) unsigned long long types; // @synthesize types=_types;
- (int)mainInternal;	// IMP=0x000000010002d15c
- (void)publishLivePhotoEffectsAnalysis:(id)arg1 toAsset:(id)arg2;	// IMP=0x000000010002d158
@property(readonly, nonatomic) double cost;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 forAsset:(id)arg2 withExistingAnalysis:(id)arg3;	// IMP=0x000000010002ceb0

@end
