/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXNewSearchResult.h>

@class NSString, NSDate;

@interface PXSearchResultCollection : NSObject <PXNewSearchResult> {

	NSString* _collectionUUID;
	unsigned long long _subtype;
	NSString* _thumbnailAssetUUID;
	NSString* _identifier;
	unsigned long long _type;
	NSString* _title;
	NSString* _subtitle;
	unsigned long long _assetCount;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned long long assetCount;              //@synthesize assetCount=_assetCount - In the implementation block
@property (nonatomic,copy) NSString * collectionUUID;                    //@synthesize collectionUUID=_collectionUUID - In the implementation block
@property (nonatomic,copy) NSString * thumbnailAssetUUID;                //@synthesize thumbnailAssetUUID=_thumbnailAssetUUID - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long subtype;               //@synthesize subtype=_subtype - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dateIntervalFormatter;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)subtype;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(unsigned long long)assetCount;
-(void)setAssetCount:(unsigned long long)arg1 ;
-(NSString *)collectionUUID;
-(NSString *)thumbnailAssetUUID;
-(void)setThumbnailAssetUUID:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetCount:(unsigned long long)arg3 collectionUUID:(id)arg4 thumbnailAssetUUID:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 subtype:(unsigned long long)arg8 ;
-(void)setCollectionUUID:(NSString *)arg1 ;
@end
