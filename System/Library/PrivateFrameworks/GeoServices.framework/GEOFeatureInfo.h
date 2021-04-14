/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface GEOFeatureInfo : NSObject {

	NSString* _name;
	NSArray* _environments;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * environments;              //@synthesize environments=_environments - In the implementation block
@property (assign,nonatomic) long long state; 
-(NSString *)name;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithName:(id)arg1 environments:(id)arg2 ;
-(NSArray *)environments;
@end

