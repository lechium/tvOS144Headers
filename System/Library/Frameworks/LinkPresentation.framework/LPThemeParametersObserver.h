/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable;

@interface LPThemeParametersObserver : NSObject {

	NSHashTable* _clients;

}
+(id)shared;
-(id)init;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(void)didChangeContentSizeCategory:(id)arg1 ;
-(void)didChangeDarkenColorsStatus:(id)arg1 ;
-(void)didChangeThemeParameters;
@end
