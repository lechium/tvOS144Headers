/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVIdleServices/TVISScreenSaver.h>

@class NSArray, NSString;

@interface TVISRetailDemoScreenSaver : NSObject <TVISScreenSaver> {

	long long _type;
	NSArray* _assets;

}

@property (nonatomic,readonly) NSArray * assets;                    //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(NSArray *)assets;
-(id)initWithAssets:(id)arg1 ;
@end

