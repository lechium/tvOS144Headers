/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSURL, NSString;

@interface SAFmfVisibilitySetCompleted : SADomainCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSURL * searchContext; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)visibilitySetCompleted;
+(id)visibilitySetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)searchContext;
-(void)setSearchContext:(NSURL *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

