/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface VNClustererOptions : NSObject {

	float _threshold;
	float _torsoThreshold;
	NSString* _type;
	NSString* _cachePath;
	NSData* _state;
	unsigned long long _requestRevision;

}

@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * cachePath;                              //@synthesize cachePath=_cachePath - In the implementation block
@property (nonatomic,retain) NSData * state;                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) float threshold;                                 //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) float torsoThreshold;                            //@synthesize torsoThreshold=_torsoThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSData *)state;
-(void)setState:(NSData *)arg1 ;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
-(unsigned long long)requestRevision;
-(void)setRequestRevision:(unsigned long long)arg1 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 ;
-(NSString *)cachePath;
-(void)setCachePath:(NSString *)arg1 ;
-(float)torsoThreshold;
-(void)setTorsoThreshold:(float)arg1 ;
@end

