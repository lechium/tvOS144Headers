/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPSecureKeyLoader.h>

@class IKAppMediaItemBridge;

@interface _TVMLSecureKeyLoader : TVPSecureKeyLoader {

	IKAppMediaItemBridge* _mediaItemBridge;

}

@property (nonatomic,__weak,readonly) IKAppMediaItemBridge * mediaItemBridge;              //@synthesize mediaItemBridge=_mediaItemBridge - In the implementation block
-(IKAppMediaItemBridge *)mediaItemBridge;
-(id)initWithMediaItemBridge:(id)arg1 ;
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
@end

