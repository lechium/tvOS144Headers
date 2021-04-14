/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMetadataGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVDateRangeMetadataGroupInternal, NSDate, NSArray;

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVDateRangeMetadataGroupInternal* _priv;

}

@property (nonatomic,readonly) NSDate * discoveryTimestamp; 
@property (nonatomic,readonly) NSDate * modificationTimestamp; 
@property (getter=_dateRangeMetadataGroupInternal,nonatomic,readonly) AVDateRangeMetadataGroupInternal * dateRangeMetadataGroupInternal; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(id)_figMetadataArrayForMetadataItems:(id)arg1 ;
+(id)_metadataItemsForFigMetadataArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithPropertyList:(id)arg1 ;
-(id)propertyList;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)uniqueID;
-(NSArray *)items;
-(NSDate *)discoveryTimestamp;
-(id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2 ;
-(id)classifyingLabel;
-(NSDate *)modificationTimestamp;
-(id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_taggedRangeMetadataDictionary;
-(void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg1 ;
-(id)_dateRangeMetadataGroupInternal;
@end

