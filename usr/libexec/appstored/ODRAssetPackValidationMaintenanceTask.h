//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@interface ODRAssetPackValidationMaintenanceTask : Task
{
}

+ (_Bool)_removeItemAtURL:(id)arg1 withDescription:(id)arg2;	// IMP=0x00000001000e7400
+ (void)_enumerateURLs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e72fc
- (_Bool)_validateMetadataURL:(id)arg1 matchesContents:(id)arg2;	// IMP=0x00000001000e8698
- (_Bool)_validateAssetsForHashURL:(id)arg1;	// IMP=0x00000001000e8280
- (_Bool)_validateAssetPackURL:(id)arg1;	// IMP=0x00000001000e7e64
- (void)_main;	// IMP=0x00000001000e75c0
- (void)main;	// IMP=0x00000001000e7234

@end

