/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SALocalSearchMapItem, NSString;

@interface SALocalSearchDropAPinCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SALocalSearchMapItem * mapItem; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dropAPinCompleted;
+(id)dropAPinCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(SALocalSearchMapItem *)mapItem;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
