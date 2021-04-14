/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKWeakObjectCallbackProxy.h>
#import <libobjc.A.dylib/CKXPCClient.h>

@class NSString;

@interface CKContainerCallbackProxy : CKWeakObjectCallbackProxy <CKXPCClient>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(id)arg2 ;
-(id)initWithContainer:(id)arg1 ;
@end

