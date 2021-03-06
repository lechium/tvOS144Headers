/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosFormats/PFMetadataBuilder.h>

@class NSArray;

@interface PFVideoMetadataBuilder : PFMetadataBuilder

@property (nonatomic,copy,readonly) NSArray * metadataItems; 
-(id)commonItemForKey:(id)arg1 string:(id)arg2 ;
-(id)titleItem;
-(id)captionItem;
-(id)accessibilityDescriptionItem;
-(id)locationItem;
-(id)creationDateItem;
-(id)videoDateFormatter;
-(id)keywordsItem;
-(NSArray *)metadataItems;
@end

