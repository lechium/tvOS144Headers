/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MFMessageHeaders.h>

@interface MFLocalizedMessageHeaders : MFMessageHeaders
+(id)localizedHeaders;
+(id)localizedHeadersFromEnglishHeaders:(id)arg1 ;
+(id)englishHeadersFromLocalizedHeaders:(id)arg1 ;
-(id)markupString;
-(id)copyFormattedHeaderValueFromAddressList:(id)arg1 ;
-(void)appendHeaderMarkupForKey:(id)arg1 value:(id)arg2 toString:(id)arg3 ;
@end

