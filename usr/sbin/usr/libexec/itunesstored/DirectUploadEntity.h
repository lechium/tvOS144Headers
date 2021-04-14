//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSSQLiteEntity.h>

@class MediaSocialPostEntity, NSArray;

@interface DirectUploadEntity : SSSQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x0000000100114ccc
+ (id)newEntityValuesWithMediaSocialAttachment:(id)arg1;	// IMP=0x0000000100113c44
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100114cd8
- (void)setProcessingWithResponse:(id)arg1;	// IMP=0x0000000100114b44
- (long long)setFailedWithError:(id)arg1;	// IMP=0x000000010011490c
- (void)resetStatusProperties;	// IMP=0x0000000100114830
@property(readonly, nonatomic) MediaSocialPostEntity *postEntity;
- (id)insertEntitiesForArtists:(id)arg1 withProperties:(id)arg2;	// IMP=0x00000001001144c4
- (void)deleteAssetFile;	// IMP=0x000000010011421c
@property(readonly, nonatomic) NSArray *artists;

@end
