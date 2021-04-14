/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString;

@interface CULogHandle : NSObject {

	NSString* _categoryName;
	LogCategory* _ucatPtr;
	NSString* _label;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3 logFlags:(unsigned)arg4 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 logFlags:(unsigned)arg3 ;
-(void)ulog:(int)arg1 message:(id)arg2 ;
-(void)ulogf:(int)arg1 format:(id)arg2 ;
-(void)ulogv:(int)arg1 format:(id)arg2 args:(char*)arg3 ;
@end
