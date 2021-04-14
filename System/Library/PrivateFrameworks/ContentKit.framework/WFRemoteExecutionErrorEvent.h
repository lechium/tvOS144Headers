/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRemoteExecutionErrorEvent : WFEvent {

	NSString* _source;
	NSString* _destinationType;
	NSString* _errorDomain;
	NSString* _errorCode;

}

@property (nonatomic,copy) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,copy) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
+(Class)codableEventClass;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(NSString *)errorCode;
-(NSString *)destinationType;
-(void)setDestinationType:(NSString *)arg1 ;
@end
