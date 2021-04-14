/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLLocation, NSURL, NSString;

@interface IMMapURLLocationInfo : NSObject {

	CLLocation* _location;
	NSURL* _url;
	NSString* _query;
	NSString* _address;

}

@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSString * address;                   //@synthesize address=_address - In the implementation block
+(id)locationInfoFromURL:(id)arg1 ;
-(NSString *)query;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSString *)address;
-(void)setQuery:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

