/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class SALocalSearchMapItem;

@interface SALocalSearchShareLocationWithExternalAccessory : SADomainCommand

@property (nonatomic,retain) SALocalSearchMapItem * mapItem; 
@property (assign,nonatomic) BOOL useNavigationDestination; 
+(id)shareLocationWithExternalAccessory;
+(id)shareLocationWithExternalAccessoryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(SALocalSearchMapItem *)mapItem;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)useNavigationDestination;
-(void)setUseNavigationDestination:(BOOL)arg1 ;
@end

