//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKDataDetectorsService : NSObject
{
}

+ (void)loadStoreGamesListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100125178
+ (id)loadLocalGamesList;	// IMP=0x000000010012501c
+ (void)clearData;	// IMP=0x0000000100125018
+ (void)updateData;	// IMP=0x0000000100124e80
+ (void)pushDataToDataDetectors:(id)arg1;	// IMP=0x0000000100124e7c
+ (id)dataDetectorsEntitiesForDictionary:(id)arg1;	// IMP=0x0000000100124cd4
+ (id)dataDetectorsKeywords;	// IMP=0x0000000100124ae0
+ (id)dataDetectorsStorageFilePath;	// IMP=0x0000000100124998

@end
