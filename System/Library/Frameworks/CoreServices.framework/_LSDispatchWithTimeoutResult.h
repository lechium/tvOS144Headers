/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface _LSDispatchWithTimeoutResult : NSObject {

	id _result;
	NSError* _error;

}

@property (retain) id result;                    //@synthesize result=_result - In the implementation block
@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
@end

