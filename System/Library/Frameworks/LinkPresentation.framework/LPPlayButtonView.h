/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/LPContentInsettable.h>

@class LPMusicPlayButtonStyle;

@interface LPPlayButtonView : LPComponentView <LPContentInsettable> {

	UIEdgeInsets _contentInset;
	LPMusicPlayButtonStyle* _style;

}
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithPlaybackInformation:(id)arg1 style:(id)arg2 ;
@end

