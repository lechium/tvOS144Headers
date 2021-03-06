/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface EspressoProfilingLayerSupportInfo : NSObject {

	BOOL _supported;
	BOOL _exists;
	BOOL _has_perf_warning;
	BOOL _internal_layer;
	NSArray* _error_public;
	NSArray* _error_private;
	NSString* _type;

}

@property (retain) NSArray * error_public;               //@synthesize error_public=_error_public - In the implementation block
@property (retain) NSArray * error_private;              //@synthesize error_private=_error_private - In the implementation block
@property (assign) BOOL supported;                       //@synthesize supported=_supported - In the implementation block
@property (assign) BOOL exists;                          //@synthesize exists=_exists - In the implementation block
@property (assign) BOOL has_perf_warning;                //@synthesize has_perf_warning=_has_perf_warning - In the implementation block
@property (assign) BOOL internal_layer;                  //@synthesize internal_layer=_internal_layer - In the implementation block
@property (retain) NSString * type;                      //@synthesize type=_type - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(BOOL)supported;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)exists;
-(NSArray *)error_public;
-(void)setError_public:(NSArray *)arg1 ;
-(NSArray *)error_private;
-(void)setError_private:(NSArray *)arg1 ;
-(void)setExists:(BOOL)arg1 ;
-(BOOL)has_perf_warning;
-(void)setHas_perf_warning:(BOOL)arg1 ;
-(BOOL)internal_layer;
-(void)setInternal_layer:(BOOL)arg1 ;
@end

