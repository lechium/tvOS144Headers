/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXSuggestionToken : NSObject {

	BOOL _canceled;
	unsigned long long _token;

}

@property (assign,nonatomic) unsigned long long token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                       //@synthesize canceled=_canceled - In the implementation block
-(id)init;
-(void)cancel;
-(unsigned long long)token;
-(void)setToken:(unsigned long long)arg1 ;
-(BOOL)canceled;
@end

