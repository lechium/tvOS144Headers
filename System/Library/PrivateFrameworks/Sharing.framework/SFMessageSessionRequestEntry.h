/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface SFMessageSessionRequestEntry : NSObject {

	BOOL _allowUnencrypted;
	/*^block*/id _handler;
	NSDictionary* _options;

}

@property (assign,nonatomic) BOOL allowUnencrypted;              //@synthesize allowUnencrypted=_allowUnencrypted - In the implementation block
@property (nonatomic,copy) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSDictionary * options;               //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(BOOL)allowUnencrypted;
-(void)setAllowUnencrypted:(BOOL)arg1 ;
@end

