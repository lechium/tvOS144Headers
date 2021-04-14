/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXContextualMemoriesSetting.h>

@class NSString, NSArray;

@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting> {

	NSArray* _peopleNames;

}

@property (nonatomic,retain) NSArray * peopleNames;                 //@synthesize peopleNames=_peopleNames - In the implementation block
@property (nonatomic,readonly) NSString * headerTitle; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)title;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSString *)headerTitle;
-(void)resetToDefault;
-(void)requestPeopleNamesUpdateSinceDate:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end
