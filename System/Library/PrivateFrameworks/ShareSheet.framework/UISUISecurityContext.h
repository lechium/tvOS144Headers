/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding> {

	long long _activationCount;
	NSMutableArray* _URLsBeingAccessed;
	NSArray* _securityScopedResources;

}

@property (nonatomic,readonly) NSArray * securityScopedResources;              //@synthesize securityScopedResources=_securityScopedResources - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)activate;
-(BOOL)isActive;
-(void)deactivate;
-(id)initWithSecurityScopedResources:(id)arg1 ;
-(NSArray *)securityScopedResources;
-(id)securityScopedResourcesMatchingPredicate:(/*^block*/id)arg1 ;
-(id)accessibleURLs;
@end

