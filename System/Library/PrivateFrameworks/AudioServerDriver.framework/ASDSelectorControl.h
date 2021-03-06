/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface ASDSelectorControl : ASDControl {

	unsigned _selectedValue;
	NSMutableArray* _values;
	NSObject*<OS_dispatch_queue> _valueQueue;
	BOOL _settable;

}

@property (assign,nonatomic) unsigned selectedValue; 
@property (getter=isSettable,nonatomic,readonly) BOOL settable;              //@synthesize settable=_settable - In the implementation block
-(id)values;
-(void)addValue:(id)arg1 ;
-(void)removeValue:(id)arg1 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)changeValue:(unsigned)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)baseClass;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned)arg4 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)driverClassName;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(BOOL)isSettable;
-(id)initWithIsSettable:(BOOL)arg1 forElement:(unsigned)arg2 inScope:(unsigned)arg3 withPlugin:(id)arg4 ;
-(id)initWithIsSettable:(BOOL)arg1 forElement:(unsigned)arg2 inScope:(unsigned)arg3 withPlugin:(id)arg4 andObjectClassID:(unsigned)arg5 ;
-(unsigned)selectedValue;
-(id)initWithIsSettable:(BOOL)arg1 withPlugin:(id)arg2 ;
-(id)nameForValue:(unsigned)arg1 ;
-(void)setSelectedValue:(unsigned)arg1 ;
@end

