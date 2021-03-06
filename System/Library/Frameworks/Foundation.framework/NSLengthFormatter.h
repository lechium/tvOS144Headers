/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString, NSNumberFormatter;

@interface NSLengthFormatter : NSFormatter <NSObservable, NSObserver> {

	void* _formatter;
	BOOL _isForPersonHeight;
	void** _reserved[2];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
@property (getter=isForPersonHeightUse) BOOL forPersonHeightUse; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(void)receiveObservedValue:(id)arg1 ;
-(void)setUnitStyle:(long long)arg1 ;
-(long long)unitStyle;
-(NSNumberFormatter *)numberFormatter;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(BOOL)isForPersonHeightUse;
-(id)unitStringFromValue:(double)arg1 unit:(long long)arg2 ;
-(long long)targetUnitFromMeters:(double)arg1 ;
-(id)stringFromValue:(double)arg1 unit:(long long)arg2 ;
-(id)stringFromMeters:(double)arg1 ;
-(void)setForPersonHeightUse:(BOOL)arg1 ;
-(id)unitStringFromMeters:(double)arg1 usedUnit:(long long*)arg2 ;
@end

