/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, PKColor, NSString, NSURL;

@interface PKDiscoveryMedia : NSObject <NSSecureCoding> {

	long long _type;
	NSDictionary* _urls;
	double _width;
	double _height;
	PKColor* _backgroundColor;
	NSString* _passKitUIImageName;
	NSURL* _localAssetURL;

}

@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * urls;                        //@synthesize urls=_urls - In the implementation block
@property (nonatomic,readonly) double width;                               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) PKColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) NSString * passKitUIImageName;              //@synthesize passKitUIImageName=_passKitUIImageName - In the implementation block
@property (nonatomic,readonly) NSURL * localAssetURL;                      //@synthesize localAssetURL=_localAssetURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(double)width;
-(double)height;
-(PKColor *)backgroundColor;
-(NSDictionary *)urls;
-(id)_remoteAssetForScale:(double)arg1 ;
-(id)imageDataFromCacheWithScale:(double)arg1 ;
-(void)downloadImageDataWithScale:(double)arg1 shouldWriteData:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)passKitUIImageName;
-(NSURL *)localAssetURL;
@end

