/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SharingUI/SharingUI-Structs.h>
@interface SFInfoFetchRequest : NSObject {

	/*^block*/id _infoResponseHandler;
	CGSize _iconSize;

}

@property (assign,nonatomic) CGSize iconSize;                   //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,copy) id infoResponseHandler;              //@synthesize infoResponseHandler=_infoResponseHandler - In the implementation block
-(void)setIconSize:(CGSize)arg1 ;
-(CGSize)iconSize;
-(id)infoResponseHandler;
-(void)setInfoResponseHandler:(id)arg1 ;
@end

