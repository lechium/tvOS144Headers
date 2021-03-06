/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class NSArray, NSString;

@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse {

	NSArray* _allFeatureApplications;
	NSString* _lastUpdated;

}

@property (nonatomic,readonly) NSArray * allFeatureApplications;              //@synthesize allFeatureApplications=_allFeatureApplications - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastUpdated;                   //@synthesize lastUpdated=_lastUpdated - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)lastUpdated;
-(NSArray *)allFeatureApplications;
@end

