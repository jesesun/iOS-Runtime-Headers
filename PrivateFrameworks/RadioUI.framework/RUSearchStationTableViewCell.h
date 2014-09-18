/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class MPUEmphasizedText, SKUICircleProgressIndicator, UIImageView, UILabel;

@interface RUSearchStationTableViewCell : RUTableViewCell {
    SKUICircleProgressIndicator *_activityIndicator;
    UIImageView *_imageView;
    MPUEmphasizedText *_stationDescriptionEmphasizedText;
    MPUEmphasizedText *_stationNameEmphasizedText;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    bool_showActivityIndicator;
}

@property bool showActivityIndicator;
@property bool showsArtwork;
@property(copy) MPUEmphasizedText * stationDescriptionEmphasizedText;
@property(copy) MPUEmphasizedText * stationNameEmphasizedText;

+ (id)_emphasizedSubtitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_emphasizedTextColor;
+ (id)_emphasizedTitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_regularSubtitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_regularTextColor;
+ (id)_regularTitleLabelAttributesForTraitCollection:(id)arg1;
+ (id)_subtitleLabelFontForTraitCollection:(id)arg1 withEmphasis:(bool)arg2;
+ (id)_textAttributesWithFont:(id)arg1 textColor:(id)arg2;
+ (id)_titleLabelFont;
+ (struct CGSize { double x1; double x2; })artworkSize;
+ (double)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setShowsArtwork:(bool)arg1;
- (void)setStationDescriptionEmphasizedText:(id)arg1;
- (void)setStationNameEmphasizedText:(id)arg1;
- (bool)showActivityIndicator;
- (bool)showsArtwork;
- (id)stationDescriptionEmphasizedText;
- (id)stationImage;
- (id)stationNameEmphasizedText;

@end