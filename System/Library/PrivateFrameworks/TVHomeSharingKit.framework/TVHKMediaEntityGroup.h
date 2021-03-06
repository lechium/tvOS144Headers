/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaObject.h>

@class NSString, NSArray;

@interface TVHKMediaEntityGroup : NSObject <TVHKMediaObject> {

	NSString* _identifier;
	NSString* _title;
	NSArray* _mediaEntities;
	NSArray* _indexBarItems;

}

@property (nonatomic,copy) NSArray * mediaEntities;                     //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,copy) NSArray * indexBarItems;                     //@synthesize indexBarItems=_indexBarItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(NSString *)identifier;
-(NSString *)title;
-(id)_initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(void)setIndexBarItems:(NSArray *)arg1 ;
-(NSArray *)mediaEntities;
-(NSArray *)indexBarItems;
@end

