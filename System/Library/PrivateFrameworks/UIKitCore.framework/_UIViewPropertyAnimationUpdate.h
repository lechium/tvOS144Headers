/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSValue;

@interface _UIViewPropertyAnimationUpdate : NSObject {

	BOOL _additive;
	BOOL _implicit;
	NSString* _propertyName;
	NSValue* _fromValue;
	NSValue* _toValue;
	double _startTime;
	double _duration;
	double _delay;

}

@property (getter=isImplicit,nonatomic,readonly) BOOL implicit;              //@synthesize implicit=_implicit - In the implementation block
@property (nonatomic,readonly) NSString * propertyName;                      //@synthesize propertyName=_propertyName - In the implementation block
@property (getter=isAdditive,nonatomic,readonly) BOOL additive;              //@synthesize additive=_additive - In the implementation block
@property (nonatomic,retain) NSValue * fromValue;                            //@synthesize fromValue=_fromValue - In the implementation block
@property (nonatomic,retain) NSValue * toValue;                              //@synthesize toValue=_toValue - In the implementation block
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                   //@synthesize delay=_delay - In the implementation block
-(id)init;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSString *)propertyName;
-(void)setToValue:(NSValue *)arg1 ;
-(void)setFromValue:(NSValue *)arg1 ;
-(BOOL)isAdditive;
-(NSValue *)fromValue;
-(NSValue *)toValue;
-(id)initWithPropertyName:(id)arg1 implicit:(BOOL)arg2 additive:(BOOL)arg3 ;
-(BOOL)isImplicit;
@end

