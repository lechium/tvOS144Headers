/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject, NSString, NWAccumulation;

@interface NWAccumulatedValue : NSObject {

	NSObject* _object;
	NSString* _keyPath;
	NWAccumulation* _accumulation;
	/*^block*/id _callback;

}

@property (nonatomic,retain) NSObject * object;                          //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSString * keyPath;                         //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) NWAccumulation * accumulation;              //@synthesize accumulation=_accumulation - In the implementation block
@property (nonatomic,copy) id callback;                                  //@synthesize callback=_callback - In the implementation block
-(id)description;
-(void)setObject:(NSObject *)arg1 ;
-(NSObject *)object;
-(NSString *)keyPath;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)snapshot;
-(void)setKeyPath:(NSString *)arg1 ;
-(NWAccumulation *)accumulation;
-(void)setAccumulation:(NWAccumulation *)arg1 ;
@end

