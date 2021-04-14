//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PHAsset;

@interface VCPPausedAnalysis : NSObject
{
    PHAsset *_asset;	// 8 = 0x8
    NSDictionary *_analysis;	// 16 = 0x10
}

+ (id)pausedAnalysis:(id)arg1 forAsset:(id)arg2;	// IMP=0x0000000100050194
+ (id)persistedPausedAnalysisFromPhotoLibrary:(id)arg1;	// IMP=0x0000000100050064
+ (id)filepathForPhotoLibrary:(id)arg1;	// IMP=0x000000010004fc5c
- (void).cxx_destruct;	// IMP=0x0000000100050660
@property(readonly, nonatomic) NSDictionary *analysis; // @synthesize analysis=_analysis;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (int)persist;	// IMP=0x000000010005022c
- (id)initWithAnalysis:(id)arg1 forAsset:(id)arg2;	// IMP=0x00000001000500d0
- (id)initWithFileFromPhotoLibrary:(id)arg1;	// IMP=0x000000010004fcdc

@end

