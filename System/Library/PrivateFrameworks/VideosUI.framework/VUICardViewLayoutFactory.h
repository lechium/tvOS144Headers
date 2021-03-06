/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VUICardViewLayout;

@interface VUICardViewLayoutFactory : NSObject {

	VUICardViewLayout* _phoneLayout;
	VUICardViewLayout* _padLayout;
	VUICardViewLayout* _tvLayout;
	long long _cardLayoutType;
	long long _gridStyle;
	long long _gridType;

}

@property (nonatomic,readonly) long long cardLayoutType;              //@synthesize cardLayoutType=_cardLayoutType - In the implementation block
@property (nonatomic,readonly) long long gridStyle;                   //@synthesize gridStyle=_gridStyle - In the implementation block
@property (nonatomic,readonly) long long gridType;                    //@synthesize gridType=_gridType - In the implementation block
+(id)cardViewFactoryForType:(long long)arg1 gridStyle:(long long)arg2 gridType:(long long)arg3 ;
-(id)activeLayout;
-(long long)gridStyle;
-(long long)cardLayoutType;
-(long long)gridType;
-(id)initWithCardLayoutType:(long long)arg1 gridStyle:(long long)arg2 gridType:(long long)arg3 ;
-(id)_layoutForCardLayoutType:(long long)arg1 interfaceIdiom:(long long)arg2 ;
-(id)featuredCardViewLayoutForIdiom:(long long)arg1 ;
-(id)upnextCardViewLayoutForIdiom:(long long)arg1 ;
-(id)standardCardViewLayoutForIdiom:(long long)arg1 ;
-(id)editorialCardViewLayout;
-(id)videoLockupCardViewLayout;
-(id)shadowForCardImageLayout;
@end

