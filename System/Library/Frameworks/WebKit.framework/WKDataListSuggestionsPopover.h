/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKDataListSuggestionsControl.h>

@interface WKDataListSuggestionsPopover : WKDataListSuggestionsControl {

	RetainPtr<WKFormRotatingAccessoryPopover>* _popover;
	RetainPtr<WKDataListSuggestionsViewController>* _suggestionsViewController;

}
-(void)invalidate;
-(void)updateWithInformation:(DataListSuggestionInformation*)arg1 ;
-(id)initWithInformation:(DataListSuggestionInformation*)arg1 inView:(id)arg2 ;
-(void)showSuggestionsDropdown:(WebDataListSuggestionsDropdownIOS*)arg1 activationType:(unsigned char)arg2 ;
-(void)didSelectOptionAtIndex:(long long)arg1 ;
@end

