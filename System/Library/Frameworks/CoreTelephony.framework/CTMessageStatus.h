/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CTMessageStatus : NSObject {

	unsigned _messageId;
	int _messageType;
	int _result;

}

@property (readonly) unsigned messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (readonly) int messageType;                 //@synthesize messageType=_messageType - In the implementation block
@property (readonly) int result;                      //@synthesize result=_result - In the implementation block
-(int)result;
-(int)messageType;
-(unsigned)messageId;
-(id)initWithMessageId:(unsigned)arg1 messageType:(int)arg2 result:(int)arg3 ;
@end

