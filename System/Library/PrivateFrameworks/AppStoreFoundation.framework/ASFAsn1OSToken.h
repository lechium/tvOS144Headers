/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreFoundation/ASFAsn1Token.h>

@class ASFAsn1Token;

@interface ASFAsn1OSToken : ASFAsn1Token {

	ASFAsn1Token* mValue;

}

@property (readonly) ASFAsn1Token * value; 
-(id)stringValue;
-(ASFAsn1Token *)value;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
@end

