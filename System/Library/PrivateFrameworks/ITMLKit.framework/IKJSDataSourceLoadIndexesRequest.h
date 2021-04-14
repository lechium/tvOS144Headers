/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSDataSourceLoadIndexesRequest.h>
@class JSValue;


@protocol IKJSDataSourceLoadIndexesRequest <IKJSEventListenerObject,JSExport>
@property (nonatomic,__weak,readonly) JSValue * dataSource; 
@property (nonatomic,readonly) NSRange range; 
@required
-(NSRange)range;
-(JSValue *)dataSource;
-(void)close:(BOOL)arg1;

@end


@class JSValue, IKJSDataSource;

@interface IKJSDataSourceLoadIndexesRequest : IKJSEventListenerObject <IKJSDataSourceLoadIndexesRequest> {

	int _state;
	IKJSDataSource* _dataSource;
	/*^block*/id _completion;
	NSRange _range;

}

@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) BOOL isClosed; 
@property (nonatomic,__weak,readonly) JSValue * dataSource; 
@property (nonatomic,readonly) NSRange range;                            //@synthesize range=_range - In the implementation block
-(void)dealloc;
-(id)completion;
-(void)cancel;
-(NSRange)range;
-(void)setCompletion:(id)arg1 ;
-(JSValue *)dataSource;
-(BOOL)isClosed;
-(void)close:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg1 range:(NSRange)arg2 ;
@end

